//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCGroupStoryCreationSession : NSObject
{
    _Bool _success;
    _Bool _hasDisplayName;
    _Bool _autosaveTurnOn;
    long long _numPosters;
    long long _numViewers;
    long long _sourceType;
    long long _storyType;
    NSString *_publicationId;
}

@property(retain, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
@property(nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long numViewers; // @synthesize numViewers=_numViewers;
@property(nonatomic) long long numPosters; // @synthesize numPosters=_numPosters;
@property(nonatomic) _Bool autosaveTurnOn; // @synthesize autosaveTurnOn=_autosaveTurnOn;
@property(nonatomic) _Bool hasDisplayName; // @synthesize hasDisplayName=_hasDisplayName;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

