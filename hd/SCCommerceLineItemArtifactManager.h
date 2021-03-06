//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCUserSession;

@interface SCCommerceLineItemArtifactManager : NSObject
{
    SCUserSession *_userSession;
    NSMutableDictionary *_artifactRequests;
}

@property(retain, nonatomic) NSMutableDictionary *artifactRequests; // @synthesize artifactRequests=_artifactRequests;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)getArtifactsForLineItem:(id)arg1 partialCompletionBlock:(CDUnknownBlockType)arg2 fullCompletionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)cancelArtifactRequestForLineItem:(id)arg1;
- (_Bool)isGettingArtifactsForLineItem:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

