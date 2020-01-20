//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SIGAlertDialogAction : NSObject
{
    NSString *_title;
    NSString *_accessibilityIdentifier;
    CDUnknownBlockType _actionBlock;
}

+ (id)alertDialogActionWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
+ (id)alertDialogActionWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;

@end

