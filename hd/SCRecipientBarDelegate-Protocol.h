//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSelectGroupMembersDelegate.h"

@class NSString, SCSnapchatter;

@protocol SCRecipientBarDelegate <SCSelectGroupMembersDelegate>
- (SCSnapchatter *)getSuggestion:(NSString *)arg1;
- (void)textDidChange:(NSString *)arg1;

@optional
- (void)didChangeHeight:(double)arg1;
@end
