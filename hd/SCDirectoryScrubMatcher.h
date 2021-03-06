//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSPredicate, NSString;

@interface SCDirectoryScrubMatcher : NSObject
{
    NSPredicate *_match;
    NSString *_pattern;
    unsigned long long _matchType;
    NSDate *_oldestLastModified;
    _Bool _lastModifiedRequired;
}

- (void).cxx_destruct;
- (unsigned long long)match:(id)arg1 lastModified:(id)arg2;
- (id)_predicateForType:(unsigned long long)arg1 parameter:(id)arg2;
@property(readonly, copy, nonatomic) NSString *pattern;
- (id)initWithMatch:(id)arg1 type:(unsigned long long)arg2 olderThan:(double)arg3 lastModifiedRequired:(_Bool)arg4;

@end

