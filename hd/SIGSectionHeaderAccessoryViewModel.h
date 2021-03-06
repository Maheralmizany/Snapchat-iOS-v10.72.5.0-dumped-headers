//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCActionModel, UIImage;

@interface SIGSectionHeaderAccessoryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_action_actionAccessoryText;
    SCActionModel *_action_actionModel;
    NSString *_button_buttonText;
    UIImage *_button_buttonIcon;
    SCActionModel *_button_actionModel;
}

+ (id)buttonWithButtonText:(id)arg1 buttonIcon:(id)arg2 actionModel:(id)arg3;
+ (id)actionWithActionAccessoryText:(id)arg1 actionModel:(id)arg2;
- (void).cxx_destruct;
- (void)matchAction:(CDUnknownBlockType)arg1 button:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

