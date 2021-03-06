//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCNetworkImage, UIColor;

@interface SCCognacAppListCellIconViewModel : NSObject <NSCopying>
{
    SCNetworkImage *_iconImage;
    UIColor *_borderColor;
}

@property(readonly, copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(readonly, copy, nonatomic) SCNetworkImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIconImage:(id)arg1 borderColor:(id)arg2;

@end

