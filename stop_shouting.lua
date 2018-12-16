-- looks through a message and counts how many capital letters were used
-- can be uses to filter out SHOUTING from a chat

message = "CAPITALLETTERS 0(#@!?aksweir^&*()=+-_?/.>,<|"

function checkMessages(message)
	local messagelen = message:len()
	local capscounter = 0 -- used to count capital letters in messages

	--[[ 
	 iterate over each character in a message, 
	 incrementing "capscounter" for every character that is capital
	--]]
	for i = 1, #message do
		local char = message:sub(i,i)
		-- replace anything that isn't a letter with a lower case "a"
		-- else it picks up spaces, numbers, and other special characters as capital letters
		char = char:gsub('%A', 'a') 
		if char == char:upper() then
			capscounter = capscounter + 1
		end
	end
	print("capscounter ",capscounter)
	print("messagelen",messagelen)
end

checkMessages(message) 
