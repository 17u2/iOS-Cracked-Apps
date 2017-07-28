//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTImagePickerControllerDelegate.h"
#import "TTRichEditorViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIViewControllerErrorHandler.h"
#import "WDPostAnsSectionHeaderViewDelegate.h"
#import "WDWendaFirstWritterPopupViewDelegate.h"

@class ALAssetsLibrary, NSDictionary, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTIndicatorView, TTRichEditorView, UIView, WDInputAccessoryView, WDPostAnswerHeaderView, WDPostAnswerViewModel;

@interface WDPostAnswerViewController : SSViewControllerBase <TTRichEditorViewDelegate, UINavigationControllerDelegate, WDWendaFirstWritterPopupViewDelegate, UIViewControllerErrorHandler, WDPostAnsSectionHeaderViewDelegate, TTImagePickerControllerDelegate>
{
    _Bool _firstAppear;
    _Bool _draftTipShow;
    _Bool _isAnimating;
    NSString *_qTitle;
    NSString *_qid;
    NSString *_ansid;
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParam;
    WDPostAnswerViewModel *_viewModel;
    TTIndicatorView *_sendingIndicatorView;
    UIView *_keyBoardCoverView;
    SSThemedLabel *_notifyLabel;
    SSThemedLabel *_titleViewLabel;
    SSThemedButton *_rightBarButton;
    WDPostAnswerHeaderView *_headerView;
    TTRichEditorView *_richEditorView;
    WDInputAccessoryView *_inputAccessoryView;
    SSThemedImageView *_videoErrorIcon;
    SSThemedButton *_videoUploadTipView;
    SSThemedLabel *_uploadVideoTipLabel;
    SSThemedButton *_uploadVideoCloseBtn;
    ALAssetsLibrary *_library;
    struct CGRect _keyBoardFrame;
}

+ (id)navigationButtonOfTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (void)removeAllSubViews:(id)arg1;
+ (void)load;
@property(retain, nonatomic) ALAssetsLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) SSThemedButton *uploadVideoCloseBtn; // @synthesize uploadVideoCloseBtn=_uploadVideoCloseBtn;
@property(retain, nonatomic) SSThemedLabel *uploadVideoTipLabel; // @synthesize uploadVideoTipLabel=_uploadVideoTipLabel;
@property(retain, nonatomic) SSThemedButton *videoUploadTipView; // @synthesize videoUploadTipView=_videoUploadTipView;
@property(retain, nonatomic) SSThemedImageView *videoErrorIcon; // @synthesize videoErrorIcon=_videoErrorIcon;
@property(retain, nonatomic) WDInputAccessoryView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) TTRichEditorView *richEditorView; // @synthesize richEditorView=_richEditorView;
@property(retain, nonatomic) WDPostAnswerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SSThemedButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool draftTipShow; // @synthesize draftTipShow=_draftTipShow;
@property(retain, nonatomic) SSThemedLabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(retain, nonatomic) SSThemedLabel *notifyLabel; // @synthesize notifyLabel=_notifyLabel;
@property(nonatomic) struct CGRect keyBoardFrame; // @synthesize keyBoardFrame=_keyBoardFrame;
@property(retain, nonatomic) UIView *keyBoardCoverView; // @synthesize keyBoardCoverView=_keyBoardCoverView;
@property(nonatomic, getter=isFirstAppear) _Bool firstAppear; // @synthesize firstAppear=_firstAppear;
@property(retain, nonatomic) TTIndicatorView *sendingIndicatorView; // @synthesize sendingIndicatorView=_sendingIndicatorView;
@property(retain, nonatomic) WDPostAnswerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSDictionary *apiParam; // @synthesize apiParam=_apiParam;
@property(retain, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(copy, nonatomic) NSString *ansid; // @synthesize ansid=_ansid;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(copy, nonatomic) NSString *qTitle; // @synthesize qTitle=_qTitle;
- (void).cxx_destruct;
- (struct CGRect)editorFrame;
- (void)editorViewDidFinishLoading:(id)arg1;
- (void)editorViewDidFinishLoadingDOM:(id)arg1;
- (void)editorViewDidChange:(id)arg1;
- (void)editorViewDidEndEditing:(id)arg1;
- (void)editorViewDidBeginEditing:(id)arg1;
- (void)ttImagePickerControllerDidCancel:(id)arg1;
- (void)ttimagePickerController:(id)arg1 didFinishTakePhoto:(id)arg2 selectedAssets:(id)arg3 withInfo:(id)arg4;
- (void)ttimagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3;
- (void)headerViewClicked:(id)arg1;
- (void)popUpViewDidDimissed;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (struct CGRect)p_frameDestForCoverView;
- (struct CGRect)p_frameForCoverView;
- (void)showGuideView;
- (void)setWittenFlag;
- (_Bool)firstTimeWrittenAnswer;
- (void)showFirstHintOrNot;
- (void)didSendButtonClicked:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)uploadViewHideAnimate;
- (void)closeUploadingVideo;
- (void)showVideoUpload:(_Bool)arg1 progress:(double)arg2 error:(id)arg3;
- (void)resetNofity;
- (void)animateShowOrHideNotifyText;
- (void)showNotify:(_Bool)arg1;
- (void)updateTaskModel;
- (void)loadDraft;
- (id)keyBoardSetHostView;
- (void)addKeyboardView:(id)arg1;
- (void)removeCoverView;
- (void)showFontPageWith:(id)arg1;
- (void)showMorePageWith:(id)arg1;
- (void)showSettingPageWith:(id)arg1;
- (void)hidekeyboard;
- (void)showVideoPicker;
- (void)showPhotoPicker;
- (void)ajustInputAccessoryView:(_Bool)arg1;
- (_Bool)showTitle;
- (void)cancel;
- (void)editAnswer;
- (void)sendAnswer;
- (void)requestContent;
- (void)viewModelInit;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithQuestionId:(id)arg1 questionTitle:(id)arg2 ansid:(id)arg3 gdExtJson:(id)arg4 apiParam:(id)arg5;
- (id)initWithBaseCondition:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
