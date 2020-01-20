//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCImpalaPublicProfileLoggingInfo : NSObject <NSCopying>
{
    long long _sourcePageType;
    NSString *_sourcePageSessionId;
    long long _pageEntryType;
}

+ (id)lens_defaultLoggingInfoWithSourcePageType:(long long)arg1;
@property(readonly, nonatomic) long long pageEntryType; // @synthesize pageEntryType=_pageEntryType;
@property(readonly, copy, nonatomic) NSString *sourcePageSessionId; // @synthesize sourcePageSessionId=_sourcePageSessionId;
@property(readonly, nonatomic) long long sourcePageType; // @synthesize sourcePageType=_sourcePageType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourcePageType:(long long)arg1 sourcePageSessionId:(id)arg2 pageEntryType:(long long)arg3;

@end
