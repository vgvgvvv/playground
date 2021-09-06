

set(targetName LuaBenchMark)
ReMake_AddTarget(
	TARGET_NAME ${targetName}
	MODE EXE
	Lib benchmark::benchmark
)