//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCGalleryMediaPostState : NSObject
{
    NSMutableDictionary *_ephemeralClientIdToUploadState;
}

- (void).cxx_destruct;
- (void)ephemeralDidFinishPost:(id)arg1 didSucceed:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long postProgress;
- (id)initWithEphemeralClientIds:(id)arg1;

@end

