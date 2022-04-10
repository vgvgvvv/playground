
FindQtComponent(Widgets)

set(TargetName FirstQt)
ReMake_AddTarget(
        TARGET_NAME ${TargetName}
        MODE EXE
        LIB Qt6::Widgets
)
