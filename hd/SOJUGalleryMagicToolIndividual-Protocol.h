//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUGalleryMagicToolIndividual <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *resourceUrl;
@property(readonly, copy, nonatomic) NSString *resourceId;
@property(readonly, copy, nonatomic) NSNumber *hasMagicImage;
@property(readonly, copy, nonatomic) NSNumber *sessionCount;
@property(readonly, copy, nonatomic) NSNumber *resetCount;
@property(readonly, copy, nonatomic) NSNumber *finalEditCount;
@property(readonly, copy, nonatomic) NSNumber *totalEditCount;
@property(readonly, copy, nonatomic) NSString *magicToolType;
@end

