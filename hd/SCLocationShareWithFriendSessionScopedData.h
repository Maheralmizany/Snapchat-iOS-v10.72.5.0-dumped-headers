//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface SCLocationShareWithFriendSessionScopedData : NSObject
{
    NSMutableDictionary *_lastTimeLocationRequestWasDisallowedForUserIds;
    NSMutableDictionary *_responsesForLocationRequestMessageIds;
    NSMutableSet *_seenLocationRequestMessageIds;
}

@property(readonly, nonatomic) NSMutableSet *seenLocationRequestMessageIds; // @synthesize seenLocationRequestMessageIds=_seenLocationRequestMessageIds;
@property(readonly, nonatomic) NSMutableDictionary *responsesForLocationRequestMessageIds; // @synthesize responsesForLocationRequestMessageIds=_responsesForLocationRequestMessageIds;
@property(readonly, nonatomic) NSMutableDictionary *lastTimeLocationRequestWasDisallowedForUserIds; // @synthesize lastTimeLocationRequestWasDisallowedForUserIds=_lastTimeLocationRequestWasDisallowedForUserIds;
- (void).cxx_destruct;
- (id)init;

@end
