//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SCSearchLoadingCellViewModel : NSObject <NSCopying>
{
    long long _contentMode;
    NSArray *_loadingItems;
    struct UIEdgeInsets _edgeInsets;
}

@property(readonly, copy, nonatomic) NSArray *loadingItems; // @synthesize loadingItems=_loadingItems;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEdgeInsets:(struct UIEdgeInsets)arg1 contentMode:(long long)arg2 loadingItems:(id)arg3;

@end
