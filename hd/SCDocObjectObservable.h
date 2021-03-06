//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCObservable.h"

@class NSObject<OS_dispatch_queue>, SCDocObject, SCMulticastObserver;

@interface SCDocObjectObservable : SCObservable
{
    NSObject<OS_dispatch_queue> *_queue;
    id <SCDocObjectObservationToken> _docObjectObesrveToken;
    SCMulticastObserver *_observers;
    SCDocObject *_mostRecentDocObject;
}

+ (id)observableFor:(id)arg1 docObjectContext:(id)arg2 queue:(id)arg3;
@property(retain) SCDocObject *mostRecentDocObject; // @synthesize mostRecentDocObject=_mostRecentDocObject;
- (void).cxx_destruct;
- (void)unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithDocObject:(id)arg1 docObjectContext:(id)arg2 queue:(id)arg3;

@end

