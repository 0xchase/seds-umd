extern crate csv;


use std::{
	error::Error,
	io,
	process,
	result::Result as StdResult,
};



fn run() -> StdResult<(), Box<dyn Error>> {

	let mut rdr = csv::Reader::from_reader(io::stdin());

	for result in rdr.records() {

		let record = result?;
		println!("{:?}", record);

	}

	Ok(())

}

fn main() {

	if let Err(err) = run() {
	
		println!("{}", err);
		process::exit(1);
	
	}

}
