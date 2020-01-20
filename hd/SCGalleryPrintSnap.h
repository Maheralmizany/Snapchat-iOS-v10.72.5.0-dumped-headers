//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL, UIImage;

@interface SCGalleryPrintSnap : NSObject <NSCopying, NSCoding>
{
    NSString *_snapId;
    NSString *_key;
    NSString *_IV;
    UIImage *_thumbnail;
    NSURL *_printUrl;
}

@property(readonly, copy, nonatomic) NSURL *printUrl; // @synthesize printUrl=_printUrl;
@property(readonly, copy, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) NSString *IV; // @synthesize IV=_IV;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 key:(id)arg2 IV:(id)arg3 thumbnail:(id)arg4 printUrl:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

