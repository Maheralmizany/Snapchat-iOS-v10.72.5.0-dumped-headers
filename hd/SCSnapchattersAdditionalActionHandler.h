//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCAddFriendsActionEventObservableRepository.h"
#import "SCAddFriendsPageEventObservableRepository.h"

@class NSDictionary, NSString, SCObservable, SCSnapchattersActionHandler;

@interface SCSnapchattersAdditionalActionHandler : NSObject <SCActionHandling, SCAddFriendsActionEventObservableRepository, SCAddFriendsPageEventObservableRepository>
{
    SCSnapchattersActionHandler *_snapchattersActionHandler;
    NSDictionary *_additionalActionHandlersMap;
    SCObservable *_addFriendsActionEventObservable;
    SCObservable *_pageEventObservable;
}

- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
@property(retain, nonatomic) SCObservable *pageEventObservable;
@property(retain, nonatomic) SCObservable *addFriendsActionEventObservable;
- (id)initWithSnapchattersDataMutator:(id)arg1 additionalActionHandlersMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

