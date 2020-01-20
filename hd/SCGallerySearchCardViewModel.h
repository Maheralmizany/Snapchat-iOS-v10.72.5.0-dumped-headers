//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCGallerySearchResult;

@interface SCGallerySearchCardViewModel : NSObject <NSCopying>
{
    SCGallerySearchResult *_result;
    struct _NSRange _range;
    struct UIEdgeInsets _cellEdgeInsets;
}

@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) struct UIEdgeInsets cellEdgeInsets; // @synthesize cellEdgeInsets=_cellEdgeInsets;
@property(readonly, copy, nonatomic) SCGallerySearchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResult:(id)arg1 cellEdgeInsets:(struct UIEdgeInsets)arg2 range:(struct _NSRange)arg3;

@end
