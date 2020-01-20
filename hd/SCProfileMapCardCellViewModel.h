//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCProfileMapCellViewModel, SCUnifiedProfileListCellViewModel;

@interface SCProfileMapCardCellViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCProfileMapCellViewModel *_mapCell_viewModel;
    SCUnifiedProfileListCellViewModel *_listCell_viewModel;
}

+ (id)mapCellWithViewModel:(id)arg1;
+ (id)listCellWithViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchMapCell:(CDUnknownBlockType)arg1 listCell:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

