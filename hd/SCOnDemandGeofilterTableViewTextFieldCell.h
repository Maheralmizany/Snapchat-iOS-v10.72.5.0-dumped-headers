//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface SCOnDemandGeofilterTableViewTextFieldCell : UITableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;
    id <SCOnDemandGeofilterTableViewTextFieldCellDelegate> _cellDelegate;
    unsigned long long _characterLimit;
}

@property(nonatomic) unsigned long long characterLimit; // @synthesize characterLimit=_characterLimit;
@property(nonatomic) __weak id <SCOnDemandGeofilterTableViewTextFieldCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setupWithViewModel:(id)arg1;
- (id)textField;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

