//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCBlockedExceptionAlertView : NSObject
{
    id <SCBlockedExceptionAlertDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBlockedExceptionAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showBlockedExceptionAlertForGroup:(id)arg1;

@end

