/****************************************************************************
 *
 *            WerTweak
 *
 *            Copyright (c) 2020 Tim De Baets
 *
 ****************************************************************************
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 * This Source Code Form is "Incompatible With Secondary Licenses", as
 * defined by the Mozilla Public License, v. 2.0.
 *
 ****************************************************************************
 *
 * Hook definitions for functions exported by wer.dll
 *
 ****************************************************************************/

#pragma once

extern const LPCSTR g_szWERDllName;
extern const LPCSTR g_szWERReportSubmitName;

extern PVOID g_pPrevWerReportSubmit;

HRESULT NewWerReportSubmit(HREPORT               hReportHandle,
                           WER_CONSENT           consent,
                           DWORD                 dwFlags,
                           PWER_SUBMIT_RESULT    pSubmitResult);
