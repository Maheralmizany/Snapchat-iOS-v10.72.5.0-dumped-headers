//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSearchDeepLinkInfo : NSObject <NSCopying>
{
    NSString *_opaqueStoryId;
}

@property(readonly, copy, nonatomic) NSString *opaqueStoryId; // @synthesize opaqueStoryId=_opaqueStoryId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOpaqueStoryId:(id)arg1;

@end
