//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SIGTextFieldPillView;

@protocol SIGTextFieldPillViewObserver <NSObject>
- (void)textFieldPillView:(SIGTextFieldPillView *)arg1 receivedText:(NSString *)arg2;
- (void)textFieldPillViewShouldBeDeleted:(SIGTextFieldPillView *)arg1;
@end
