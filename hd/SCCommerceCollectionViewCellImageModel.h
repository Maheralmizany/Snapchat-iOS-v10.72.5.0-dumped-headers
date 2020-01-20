//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, SCCompositeNetworkImageModel;

@interface SCCommerceCollectionViewCellImageModel : NSObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    SCCompositeNetworkImageModel *_imageModel;
}

@property(readonly, copy, nonatomic) SCCompositeNetworkImageModel *imageModel; // @synthesize imageModel=_imageModel;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 imageModel:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

