//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SwipeView.h"

@class SCAppNotification;

@protocol SCStoriesPage <SwipeView>
@property(nonatomic) long long storiesPageEntryType;
@property(nonatomic) __weak id <SCHovaOverscrollDelegate> hovaOverscrollDelegate;
- (_Bool)viewingStory;

@optional
- (void)handleNotificationPressed:(SCAppNotification *)arg1;
@end

