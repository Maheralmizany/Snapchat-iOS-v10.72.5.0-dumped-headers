//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCUnifiedActionMenuAvatarItemViewModel, SCUnifiedActionMenuButtonItemViewModel, SCUnifiedActionMenuContextualItemViewModel, SCUnifiedActionMenuSelectionItemViewModel, SCUnifiedActionMenuTextItemViewModel, SCUnifiedActionMenuToggleItemViewModel;

@interface SCUnifiedActionMenuItemViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCUnifiedActionMenuTextItemViewModel *_text_textViewModel;
    SCUnifiedActionMenuButtonItemViewModel *_button_buttonViewModel;
    SCUnifiedActionMenuToggleItemViewModel *_toggle_toggleViewModel;
    SCUnifiedActionMenuContextualItemViewModel *_contextual_contextualItemViewModel;
    SCUnifiedActionMenuAvatarItemViewModel *_avatar_avatarItemViewModel;
    SCUnifiedActionMenuSelectionItemViewModel *_selection_selectionItemViewModel;
}

+ (id)toggleWithToggleViewModel:(id)arg1;
+ (id)textWithTextViewModel:(id)arg1;
+ (id)selectionWithSelectionItemViewModel:(id)arg1;
+ (id)contextualWithContextualItemViewModel:(id)arg1;
+ (id)buttonWithButtonViewModel:(id)arg1;
+ (id)avatarWithAvatarItemViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchText:(CDUnknownBlockType)arg1 button:(CDUnknownBlockType)arg2 toggle:(CDUnknownBlockType)arg3 contextual:(CDUnknownBlockType)arg4 avatar:(CDUnknownBlockType)arg5 selection:(CDUnknownBlockType)arg6;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

