//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCCommerceImageDetails : NSObject <NSCopying>
{
    NSString *_externalImageId;
    NSString *_defaultImageUrl;
    NSString *_iconImageUrl;
    NSString *_smallImageUrl;
    NSString *_mediumImageUrl;
    NSString *_largeImageUrl;
    NSString *_originalImageUrl;
    struct CGSize _imageSize;
}

@property(readonly) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, copy) NSString *originalImageUrl; // @synthesize originalImageUrl=_originalImageUrl;
@property(readonly, copy) NSString *largeImageUrl; // @synthesize largeImageUrl=_largeImageUrl;
@property(readonly, copy) NSString *mediumImageUrl; // @synthesize mediumImageUrl=_mediumImageUrl;
@property(readonly, copy) NSString *smallImageUrl; // @synthesize smallImageUrl=_smallImageUrl;
@property(readonly, copy) NSString *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
@property(readonly, copy) NSString *defaultImageUrl; // @synthesize defaultImageUrl=_defaultImageUrl;
@property(readonly, copy) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExternalImageId:(id)arg1 defaultImageUrl:(id)arg2 iconImageUrl:(id)arg3 smallImageUrl:(id)arg4 mediumImageUrl:(id)arg5 largeImageUrl:(id)arg6 originalImageUrl:(id)arg7 imageSize:(struct CGSize)arg8;

@end

