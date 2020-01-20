//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface SCCommerceProductDetailsBitmojiAvatarViewModel : NSObject <NSCopying>
{
    _Bool _isCurrentUser;
    UIImage *_image;
    NSString *_name;
}

@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 name:(id)arg2 isCurrentUser:(_Bool)arg3;

@end
