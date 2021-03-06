//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCAddFriendsActionEventObservableRepository.h"

@class NSString, SCLazy, SCObservable;

@interface SCAddSnapchatterActionHandler : NSObject <SCAddFriendsActionEventObservableRepository, SCActionHandling>
{
    SCLazy *_snapchattersDataMutator;
    SCObservable *_addFriendsActionEventObservable;
}

@property(retain, nonatomic) SCObservable *addFriendsActionEventObservable; // @synthesize addFriendsActionEventObservable=_addFriendsActionEventObservable;
- (void).cxx_destruct;
- (void)_emitActionEventWithUpdateDataRequest:(id)arg1 state:(unsigned long long)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSnapchattersDataMutator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

