//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGTableViewCell.h"

@class SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel, UISwitch;

@interface SCOnDemandGeofilterTableViewSwitchCell : SIGTableViewCell
{
    SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel *_vm;
    UISwitch *_uiSwitch;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UISwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
@property(retain, nonatomic) SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;
- (void)switchStateChanged:(id)arg1;
- (void)setSwitchState:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
