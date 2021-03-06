//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData, NSString;

@interface SCLensExplorerDebugModel : NSObject <NSCopying, NSCoding>
{
    NSString *_debugHTML;
    NSString *_storyId;
    NSData *_lastStreamToken;
}

@property(readonly, copy, nonatomic) NSData *lastStreamToken; // @synthesize lastStreamToken=_lastStreamToken;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, copy, nonatomic) NSString *debugHTML; // @synthesize debugHTML=_debugHTML;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDebugHTML:(id)arg1 storyId:(id)arg2 lastStreamToken:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

