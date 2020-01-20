//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"

@class NSString, SCEventListenerAnnouncer;

@interface SCNetworkImageViewSynchronizer : NSObject <SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    // Error parsing type: Ai, name: _numberSynced
    long long _numberNeededToSync;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)triggerSync;
- (id)initWithNetworkImageViewsCount:(long long)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
