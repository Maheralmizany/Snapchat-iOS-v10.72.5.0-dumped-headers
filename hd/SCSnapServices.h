//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy, SCPublishSubject, SCSnapViewCache;

@interface SCSnapServices : NSObject
{
    SCLazy *_snapViewCache;
    SCPublishSubject *_snapSendEvents;
}

@property(readonly, nonatomic) SCPublishSubject *snapSendEvents; // @synthesize snapSendEvents=_snapSendEvents;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCSnapViewCache *snapViewCache;
- (id)initWithSnapViewCache:(id)arg1 snapSendEvents:(id)arg2;

@end

