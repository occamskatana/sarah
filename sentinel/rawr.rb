def shit
	data = File.open("data.dat")
	counter = 0
	total = 0
	numbers = []

	data.each_line do |line|
		numbers << line if line != "-99"
	end

	numbers.each do |number|
		counter += 1
		total += number.to_i
		output_file = File.new("report.txt")
		output_file << number
	end
	
end

shit

