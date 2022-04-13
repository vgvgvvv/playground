
UseQt()
FindQtComponent(Widgets)

set(TargetName Editor_UI)
ReMake_AddTarget(
        TARGET_NAME ${TargetName}
        MODE SHARED
        LIB ResetCore_CommonLib
            Qt6::Widgets
)