//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCCognacAdSDKInfo : NSObject <NSCopying>
{
    NSString *_appId;
    NSString *_buildId;
    NSArray *_slotIds;
}

@property(readonly, copy, nonatomic) NSArray *slotIds; // @synthesize slotIds=_slotIds;
@property(readonly, copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppId:(id)arg1 buildId:(id)arg2 slotIds:(id)arg3;

@end

