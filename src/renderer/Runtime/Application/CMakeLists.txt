

set(TargetName QtRenderer)
ReMake_AddTarget(
        TARGET_NAME ${TargetName}
        MODE EXE
        LIB Runtime_Core
            Editor_UI
)

