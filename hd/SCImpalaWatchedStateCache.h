//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImpalaWatchedStateCaching.h"

@class NSString, SCUserSession;

@interface SCImpalaWatchedStateCache : NSObject <SCImpalaWatchedStateCaching>
{
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)observeWithCallback:(CDUnknownBlockType)arg1;
- (void)syncItemsWithItems:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

