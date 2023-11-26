

set(TargetName TestLibUV)
ReMake_AddTarget(
        TARGET_NAME ${TargetName}
        MODE EXE
        LIB uv
)

ReMake_StartUse()
UseLibuv(${TargetName}, "v1.44.2")
ReMake_EndUse()