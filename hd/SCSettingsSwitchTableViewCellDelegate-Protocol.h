//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SCSettingsSwitchTableViewCell;

@protocol SCSettingsSwitchTableViewCellDelegate <NSObject>
- (void)settingsSwitchTableViewCell:(SCSettingsSwitchTableViewCell *)arg1 didToggleSwitch:(_Bool)arg2;

@optional
- (void)settingsSwitchTableViewCell:(SCSettingsSwitchTableViewCell *)arg1 didTapURL:(NSURL *)arg2;
@end

