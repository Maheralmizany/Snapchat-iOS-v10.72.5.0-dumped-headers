//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSAttributedString, NSString, UIColor;

@protocol SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool enableAccessoryCheckmark;
@property(readonly, nonatomic) _Bool selectable;
@property(readonly, nonatomic) _Bool enableActivityIndicator;
@property(readonly, nonatomic) _Bool enableDisclosureIndicator;
@property(readonly, copy, nonatomic) UIColor *detailColor;
@property(readonly, copy, nonatomic) UIColor *contentColor;
@property(readonly, copy, nonatomic) NSAttributedString *attributedDetailContent;
@property(readonly, copy, nonatomic) NSString *detailContent;
@property(readonly, copy, nonatomic) NSString *contentName;
@end

