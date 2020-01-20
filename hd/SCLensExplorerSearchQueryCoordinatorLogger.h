//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventAnnouncing.h"
#import "SCLensExplorerSearchQueryCoordinatorLoggerProtocol.h"

@class NSString, SCEventListenerAnnouncer, SCSearchLogger;

@interface SCLensExplorerSearchQueryCoordinatorLogger : NSObject <SCLensExplorerSearchQueryCoordinatorLoggerProtocol, SCEventAnnouncing>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchLogger *_searchLogger;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)handleResultsWithQuery:(id)arg1 currentQuery:(id)arg2 requestType:(long long)arg3;
- (void)handleCachedResultsWithQuery:(id)arg1 cachedResponse:(id)arg2 requestType:(long long)arg3;
- (id)initWithSearchLogger:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

