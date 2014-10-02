//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class CKConversation, NSArray, NSString, UINavigationController, _UINavigationControllerPalette;

@interface CKTranscriptHeaderController : UITableViewController
{
    BOOL _visible;
    BOOL __showPhoneButton;
    BOOL __showEmailButton;
    id <CKTranscriptHeaderControllerDelegate> _delegate;
    UINavigationController *_paletteNavigationController;
    CKConversation *_conversation;
    _UINavigationControllerPalette *_transcriptHeaderPalette;
    NSArray *_recipients;
    NSString *_serviceAvailabilityKey;
}

@property(readonly, nonatomic) BOOL _showEmailButton; // @synthesize _showEmailButton=__showEmailButton;
@property(readonly, nonatomic) BOOL _showPhoneButton; // @synthesize _showPhoneButton=__showPhoneButton;
@property(retain, nonatomic) NSString *serviceAvailabilityKey; // @synthesize serviceAvailabilityKey=_serviceAvailabilityKey;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) _UINavigationControllerPalette *transcriptHeaderPalette; // @synthesize transcriptHeaderPalette=_transcriptHeaderPalette;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) UINavigationController *paletteNavigationController; // @synthesize paletteNavigationController=_paletteNavigationController;
@property(nonatomic) id <CKTranscriptHeaderControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideTranscriptHeader;
- (void)showTranscriptHeader;
- (struct UIEdgeInsets)_navigationBarInsets;
- (void)_configureCellForAvailableServices:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_hasLinkedTelephoneNumbersForEntity:(id)arg1;
@property(readonly, nonatomic) BOOL _isFaceTimeAudioAvailable;
@property(readonly, nonatomic) BOOL _isFaceTimeVideoAvailable;
@property(readonly, nonatomic) BOOL _isTelephonyDevice;
- (BOOL)_showEmailButtonForEntity:(id)arg1;
@property(readonly, nonatomic) BOOL _showFaceTimeVideoButton;
- (BOOL)_showPhoneButtonForEntity:(id)arg1;
@property(readonly, nonatomic) BOOL _showInfoButton;
- (void)infoAction:(id)arg1;
- (void)facetimeVideoAction:(id)arg1;
- (void)phoneCallAction:(id)arg1;
- (void)sendEmailAction:(id)arg1;
- (id)indexPathForButton:(id)arg1;
- (id)entityForButton:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithStyle:(int)arg1;
- (void)dealloc;

@end
