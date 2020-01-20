//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface SCOnDemandGeofilterTableViewTextFieldCellViewModelBuilder : NSObject
{
    NSString *_cellNameText;
    NSString *_detailText;
    NSString *_textFieldText;
    UIColor *_cellNameTextColor;
    UIColor *_detailTextColor;
    UIColor *_textFieldTextColor;
}

+ (id)withOnDemandGeofilterTableViewTextFieldCellViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)setTextFieldTextColor:(id)arg1;
- (id)setDetailTextColor:(id)arg1;
- (id)setCellNameTextColor:(id)arg1;
- (id)setTextFieldText:(id)arg1;
- (id)setDetailText:(id)arg1;
- (id)setCellNameText:(id)arg1;
- (id)build;

@end
