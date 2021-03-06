//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError, UIImage;

@interface SCCommerceProductImageDataModel : NSObject <NSCopying>
{
    _Bool _loaded;
    UIImage *_image;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 loaded:(_Bool)arg2 error:(id)arg3;

@end

