quest cubeler begin
	state start begin
		when 20383.chat."Ýtem Üretim Penceresi " with pc.get_level() >= 1 begin
			setskin(NOWINDOW)
			command("cube open")
		end
	end
end
