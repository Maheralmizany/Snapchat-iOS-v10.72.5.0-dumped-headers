//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView;

@protocol ContactsVCUserActionDelegate <NSObject>

@optional
- (void)contactsViewDidScroll:(UIScrollView *)arg1;
- (void)onFriendSelectionToggled;
- (void)startContactAccessWorkflow;
@end
