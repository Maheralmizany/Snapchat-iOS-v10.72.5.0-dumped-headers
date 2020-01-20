//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSDictionary, NSString;

@interface BTClientMetadata : NSObject <NSCopying, NSMutableCopying>
{
    long long _integration;
    long long _source;
    NSString *_sessionId;
}

+ (id)sourceToString:(long long)arg1;
+ (id)integrationToString:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) long long integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *parameters;
@property(readonly, copy, nonatomic) NSString *sourceString;
@property(readonly, copy, nonatomic) NSString *integrationString;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

