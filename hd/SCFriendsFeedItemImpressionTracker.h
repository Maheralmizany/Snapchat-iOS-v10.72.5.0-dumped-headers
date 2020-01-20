//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"

@class NSString, SCEventListenerAnnouncer;

@interface SCFriendsFeedItemImpressionTracker : NSObject <SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    _Bool _isFeedVisible;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)cellDidDisappearWithViewModel:(id)arg1;
- (void)cellDidAppearWithViewModel:(id)arg1 previousViewModel:(id)arg2;
- (void)feedDidDisappearWithVisibleViewModels:(id)arg1;
- (void)feedDidAppearWithVisibleViewModels:(id)arg1;
- (id)init;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

