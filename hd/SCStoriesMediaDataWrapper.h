//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData;

@interface SCStoriesMediaDataWrapper : NSObject <NSCopying, NSCoding>
{
    _Bool _isEncrypted;
    NSData *_data;
}

@property(readonly, nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 isEncrypted:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;

@end

